#pragma once
#include <enetpp/server.h>




class Server
{
public:
	Server();
	~Server();

    struct server_client
    {

        unsigned int _uid;
        unsigned int get_id() const { return _uid; }
    };

	void initialise();
	void run();
	
private:
    enetpp::server<server_client> network_server;
    unsigned int next_uid = 0;

};