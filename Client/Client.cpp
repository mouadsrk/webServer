#include "Client.hpp"


Client::Client()
{
    clientSocket = 0;
    filename = "";
    typeRequest.clear();
    header = false;
    restRequest = "";
    Content_Length = 0;
    lenSend = 0;
    readylen = 0;
    boundary = "";
    dataResponse = "";
    lengthFile = 0;
    error = 0;
    cgi = "";
    connection = "";
    TransferEncoding = "";
}

Client::~Client()
{
}
