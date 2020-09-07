/* -----------------------------------------------------------------------------
 *
 * File Name:  Client.h
 * Author: Darrin Ternes
 * Team: 15

 ---------------------------------------------------------------------------- */

#ifndef CLIENT_H
#define CLIENT_H
#include <string>


class Client {

private:																											//private vars

	bool end_program;
	int ship_count;
	bool turn;																									//false = player1, true = player2

public:																												//public vars

	Client();																	//Constructor
	~Client();																//destructor
	void RunSetup();																//Actual Program Method
	void PlayGame(int num_ships);


};

//#include "Client.cpp"

#endif




//---------------------------------------------------------------------
