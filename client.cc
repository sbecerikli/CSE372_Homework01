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

class Client : public cSimpleModule
{
  protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
};

Define_Module(Client);

void Client::initialize()
{

}

void Client::handleMessage(cMessage *msg)
{
    packmsg* pmsj = new packmsg();
    srand(time(NULL));
        int x = rand() % 12 + 1;
        pmsj = (packmsg*)msg;
        std::string clients[] = {"C1", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "C10", "C11", "C12", "Server"};

            ev<< pmsj->getDest() << " mesajý aldý";
            pmsj->setSrc(pmsj->getSrc());
            pmsj->setDest(pmsj->getDest());

            send(pmsj, "port$o");

}
