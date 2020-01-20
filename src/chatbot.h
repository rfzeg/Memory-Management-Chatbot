#ifndef CHATBOT_H_
#define CHATBOT_H_

#include <wx/bitmap.h>
#include <string>

class GraphNode; // forward declaration
class ChatLogic; // forward declaration

class ChatBot
{
private:
    // data handles (owned)
    wxBitmap *_image; // Chatbot class is responsible of managing the avatar image in the heap

    // data handles (not owned)
    GraphNode *_currentNode;
    GraphNode *_rootNode; // used to reset the chatbot to the start of the network once it reaches the end of the convesation tree
    ChatLogic *_chatLogic; // for being able to pass messages back to the graphical user interface

    // proprietary functions
    int ComputeLevenshteinDistance(std::string s1, std::string s2);

    //int _size;
    //int *_data;

public:
    // constructors / destructors
    ChatBot();                     // constructor WITHOUT memory allocation
    ChatBot(std::string filename); // constructor WITH memory allocation

    //// Implementation of rule of fiveb(Ref.: Lesson 5 move semantics!)
    ~ChatBot(); // 1 : destructor
    ChatBot(const ChatBot &source); // 2 : copy constructor
    ChatBot &operator=(const ChatBot &source); // 3 : copy assignment operator
    ChatBot(ChatBot &&source); // 4 : move constructor
    ChatBot &operator=(ChatBot &&source); // 5 : move assignment operator

    // getters / setters
    void SetCurrentNode(GraphNode *node);
    void SetRootNode(GraphNode *rootNode) { _rootNode = rootNode; }
    void SetChatLogicHandle(ChatLogic *chatLogic) { _chatLogic = chatLogic; }
    wxBitmap *GetImageHandle() { return _image; }

    // communication
    void ReceiveMessageFromUser(std::string message); // generates the response typed by the user to be able to send it back to the chat logic
};

#endif /* CHATBOT_H_ */