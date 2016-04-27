//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "pack_m.h"

class Router : public cSimpleModule
{
  protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
};

Define_Module(Router);

void Router::initialize(){
    // TODO - Generated method body
}

void Router::handleMessage(cMessage *msg)
{

    packmsg* pmsj = new packmsg("mesajxx");
    pmsj = (packmsg*)msg;
    //EV <<  "server : " << pmsj->getDest();
    srand(time(NULL));

    int y = rand() % 5 + 1;
    std::string clients[] = {"Node1", "Node2", "Node3", "Node4", "Node5", "Node6", "Node7", "Node8", "Node9", "Node10", "Node11", "Node12"};

    //ev<< pmsj->getDest() << " mesajý aldý";

    pmsj->setSrc(pmsj->getName());
    pmsj->setDest(clients[y].c_str());
    pmsj->setName(clients[y].c_str());
    send(pmsj, "port$o", y);
}
