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

package cse372_homework01;

//
// TODO auto-generated type
//
simple Client
{
    @display("i=device/pc4");

    gates:
        inout port;
}

simple Router
{
    @display("i=device/accesspoint");
    gates:
        inout port[];
}

simple Server
{
    @display("i= device/server");

    gates:
        inout port[];
}

network Homework01
{
    parameters:

        @display("bgb=692,594");
    submodules:

        Server: Server {
            @display("p=325,291");
        }
        Router1: Router {
            @display("p=325,160");
        }
        Router2: Router {
            @display("p=484,290");
        }
        Router3: Router {
            @display("p=329,414");
        }
        Router4: Router {
            @display("p=163,290");
        }
        Node1: Client {
            @display("p=244,32");
        }
        Node2: Client {
            @display("p=324,32");
        }
        Node3: Client {
            @display("p=386,32");
        }
        Node4: Client {
            @display("p=585,219");
        }
        Node5: Client {
            @display("p=585,291");
        }
        Node6: Client {
            @display("p=585,375");
        }
        Node7: Client {
            @display("p=437,515");
        }
        Node8: Client {
            @display("p=328,515");
        }
        Node9: Client {
            @display("p=224,521");
        }
        Node10: Client {
            @display("p=60,387");
        }
        Node11: Client {
            @display("p=60,291");
        }
        Node12: Client {
            @display("p=60,194");
        }
    connections:
        Router1.port++ <--> Server.port++;
        Router2.port++ <--> Server.port++;
        Router3.port++ <--> Server.port++;
        Router4.port++ <--> Server.port++;

        Router1.port++ <--> Router2.port++;
        Router2.port++ <--> Router3.port++;
        Router3.port++ <--> Router4.port++;
        Router4.port++ <--> Router1.port++;

        Node1.port <--> Router1.port++;
        Node2.port <--> Router1.port++;
        Node3.port <--> Router1.port++;
        Node4.port <--> Router2.port++;
        Node5.port <--> Router2.port++;
        Node6.port <--> Router2.port++;
        Node7.port <--> Router3.port++;
        Node8.port <--> Router3.port++;
        Node9.port <--> Router3.port++;
        Node10.port <--> Router4.port++;
        Node11.port <--> Router4.port++;
        Node12.port <--> Router4.port++;
}
