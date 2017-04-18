//#include "Contacts.h"
//#include "ip_mac.h"
//#include <sstream>
//#include <fstream>
//#include <vector>
//#include <memory>
//int main(int argc, char**argv) 
//{
//    std::ifstream contactsFs;
//    std::ifstream ip_macFs;
//    std::ofstream out("out.csv");
//    std::vector<std::unique_ptr<Contacts>> contactsVec;
//    std::string line;
//    std::string temp;
//    contactsFs.open(argv[1]);
//    getline(contactsFs, line);//移除一行没用的
//    while (getline(contactsFs, line))
//    {
//        contactsVec.push_back(std::make_unique<Contacts>(Contacts(line)));
//    }
//    contactsFs.close();
//    ip_macFs.open(argv[2]);
//    getline(ip_macFs, line);//移除一行没用的
//    bool flag = false;
//    while (getline(ip_macFs, line))
//    {
//        flag = false;
//        ip_mac ip(line);
//        for (auto iter = contactsVec.cbegin(); iter != contactsVec.cend(); ++iter) 
//        {
//            if ((*iter)->getName() == ip.getName())
//            {
//                flag = true;
//                out << line << ',' << (*iter)->getDepartment() << ','
//                    << ',' << (*iter)->getMobile() << ',' << (*iter)->getPhone() << ',' << (*iter)->getVitrual() << std::endl;
//            }
//        }
//        if (!flag) {
//            out << line <<std::endl;
//        }
//    }
//    return 0;
//}