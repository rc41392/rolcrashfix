#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream ifs("legendsfix4.exe.bin", ios::in | ios::out | ios::binary);
    ofstream ofs("legendsfix4.exe.bin2", ios::out|ios::binary);
    ofstream ofs2("log.txt", ios::out);
    char x;
    char x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11;
    int count = 0;
    ifs >> x0;
    ifs >> x1;
    ifs >> x2;
    ifs >> x3;
    ifs >> x4;
    ifs >> x5;
    ifs >> x6;
    ifs >> x7;
    ifs >> x8;
    ifs >> x9;
    ifs >> x10;
    ifs >> x11;
    ofs << x0;
    while(!ifs .eof()) {
        count ++;
        ifs.read(&x, sizeof( char ) );
        x0 = x1;
        x1 = x2;
        x2 = x3;
        x3 = x4;
        x4 = x5;
        x5 = x6;
        x6 = x7;
        x7 = x8;
        x8 = x9;
        x9 = x10;
        x10 = x11;
        x11 = x;
        ofs.write(&x0,  sizeof( char ) );
        if(x0 == (char)(0x0F) && x1 == (char)(0xBF) && (
                (x2 == (char)(0x46) && x3 == (char)(0x24) && x4 == (char)(0x8B)) 
                || (x2 == (char)(0x4E) && x3 == (char)(0x24) && x4 == (char)(0x8B)) 
                || (x2 == (char)(0x4B) && x3 == (char)(0x24) && x4 == (char)(0x8B))
                || (x2 == (char)(0x56) && x3 == (char)(0x24) && x4 == (char)(0x8B))
                || (x2 == (char)(0x46) && x3 == (char)(0x74) && x4 == (char)(0x8B)) 
                || (x2 == (char)(0x4E) && x3 == (char)(0x74) && x4 == (char)(0xA1))
                || (x2 == (char)(0x47) && x3 == (char)(0x74) && x4 == (char)(0x8B))
                || (x2 == (char)(0x4F) && x3 == (char)(0x74) && x4 == (char)(0x8B))
                || (x2 == (char)(0x57) && x3 == (char)(0x74) && x4 == (char)(0xA1))
                || (x2 == (char)(0x47) && x3 == (char)(0x74) && x4 == (char)(0x88))
                || (x2 == (char)(0x4E) && x3 == (char)(0x74) && x4 == (char)(0x8B))
                || (x2 == (char)(0x45) && x3 == (char)(0x74) && x4 == (char)(0x8B))
                || (x2 == (char)(0x55) && x3 == (char)(0x74) && x4 == (char)(0xA1))
                || (x2 == (char)(0x47) && x3 == (char)(0x74) && x4 == (char)(0xC7))
                || (x2 == (char)(0x43) && x3 == (char)(0x24) && x4 == (char)(0x8B))
                || (x2 == (char)(0x4F) && x3 == (char)(0x24) && x4 == (char)(0x8B))
                || (x2 == (char)(0x45) && x3 == (char)(0x74) && x4 == (char)(0x0F))
                || (x2 == (char)(0x4D) && x3 == (char)(0x74) && x4 == (char)(0x88))
                || (x2 == (char)(0x47) && x3 == (char)(0x74) && x4 == (char)(0x53))
                || (x2 == (char)(0x55) && x3 == (char)(0x24) && x4 == (char)(0xA1))
                || (x2 == (char)(0x4F) && x3 == (char)(0x24) && x4 == (char)(0x56))
                || (x2 == (char)(0x4D) && x3 == (char)(0x24) && x4 == (char)(0x8B))
                || (x2 == (char)(0x45) && x3 == (char)(0x24) && x4 == (char)(0x8B))
                || (x2 == (char)(0x43) && x3 == (char)(0x24) && x4 == (char)(0x57))
                || (x2 == (char)(0x37) && x3 == (char)(0x8B) && x4 == (char)(0x0D))
                || (x2 == (char)(0x30) && x3 == (char)(0x8B) && x4 == (char)(0x0D))
                || (x2 == (char)(0x38) && x3 == (char)(0x8B) && x4 == (char)(0x0D))
                || (x2 == (char)(0x7C) && x3 == (char)(0x41) && x4 == (char)(0x5A))
                || (x2 == (char)(0x5D) && x3 == (char)(0x00) && x4 == (char)(0xA1))
                || (x2 == (char)(0x0B) && x3 == (char)(0x8B) && x4 == (char)(0x15))
                || (x2 == (char)(0x28) && x3 == (char)(0x8B) && x4 == (char)(0x0D))
                || (x2 == (char)(0x5D) && x3 == (char)(0x24) && x4 == (char)(0x50))
                || (x2 == (char)(0x56) && x3 == (char)(0x74) && x4 == (char)(0xA1))
                || (x2 == (char)(0x57) && x3 == (char)(0x74) && x4 == (char)(0x89))
                || (x2 == (char)(0x55) && x3 == (char)(0x24) && x4 == (char)(0x50))
                || (x2 == (char)(0x5D) && x3 == (char)(0x24) && x4 == (char)(0x57))
                || (x2 == (char)(0x41) && x3 == (char)(0x4A) && x4 == (char)(0x99))
                || (x2 == (char)(0x41) && x3 == (char)(0x48) && x4 == (char)(0x99))
                || (x2 == (char)(0x50) && x3 == (char)(0x24) && x4 == (char)(0x89))
                || (x2 == (char)(0x50) && x3 == (char)(0x4A) && x4 == (char)(0x89))
                || (x2 == (char)(0x40) && x3 == (char)(0x24) && x4 == (char)(0x8B))
                || (x2 == (char)(0x5D) && x3 == (char)(0x24) && x4 == (char)(0x56))
                || (x2 == (char)(0x45) && x3 == (char)(0x74) && x4 == (char)(0xC6))
                || (x2 == (char)(0x4D) && x3 == (char)(0x74) && x4 == (char)(0xC7))
                || (x2 == (char)(0x55) && x3 == (char)(0x24) && x4 == (char)(0x52))
                || (x2 == (char)(0x45) && x3 == (char)(0x24) && x4 == (char)(0x50))
                || (x2 == (char)(0x55) && x3 == (char)(0x24) && x4 == (char)(0x8B))
                || (x2 == (char)(0x45) && x3 == (char)(0x58) && x4 == (char)(0x8B))
                || (x2 == (char)(0x45) && x3 == (char)(0x58) && x4 == (char)(0x3B))
                || (x2 == (char)(0x4E) && x3 == (char)(0x5A) && x4 == (char)(0x8B))
                || (x2 == (char)(0x53) && x3 == (char)(0x24) && x4 == (char)(0xA1))
                || (x2 == (char)(0x78) && x3 == (char)(0x02) && x4 == (char)(0x8B))
                || (x2 == (char)(0x70) && x3 == (char)(0x02) && x4 == (char)(0x74))
                || (x2 == (char)(0x57) && x3 == (char)(0x74) && x4 == (char)(0xC6))
                || (x2 == (char)(0x47) && x3 == (char)(0x74) && x4 == (char)(0x89))
                || (x2 == (char)(0x45) && x3 == (char)(0x74) && x4 == (char)(0x88))
                || (x2 == (char)(0x4E) && x3 == (char)(0x5C) && x4 == (char)(0x8B))
                || (x2 == (char)(0x42) && x3 == (char)(0x24) && x4 == (char)(0xC2))
                || (x2 == (char)(0x4D) && x3 == (char)(0x74) && x4 == (char)(0x8B))
                || (x2 == (char)(0x53) && x3 == (char)(0x24) && x4 == (char)(0x8B))
                || (x2 == (char)(0x7B) && x3 == (char)(0x24) && x4 == (char)(0x69))
                || (x2 == (char)(0x46) && x3 == (char)(0x24) && x4 == (char)(0x50))
                || (x2 == (char)(0x46) && x3 == (char)(0x22) && x4 == (char)(0x8B))
                || (x2 == (char)(0x4A) && x3 == (char)(0x5C) && x4 == (char)(0x05))
                || (x2 == (char)(0x4F) && x3 == (char)(0x22) && x4 == (char)(0x8B))
                || (x2 == (char)(0x47) && x3 == (char)(0x22) && x4 == (char)(0x8B))
                || (x2 == (char)(0x58) && x3 == (char)(0x22) && x4 == (char)(0x8B))
                || (x2 == (char)(0x56) && x3 == (char)(0x22) && x4 == (char)(0x8B))
                || (x2 == (char)(0x56) && x3 == (char)(0x22) && x4 == (char)(0x6A))
                || (x2 == (char)(0x7E) && x3 == (char)(0x24) && x4 == (char)(0x8B))
                || (x2 == (char)(0x45) && x3 == (char)(0x00) && x4 == (char)(0x8B))
                || (x2 == (char)(0x41) && x3 == (char)(0x22) && x4 == (char)(0x8B))
                || (x2 == (char)(0x47) && x3 == (char)(0x74) && x4 == (char)(0xB3))
                || (x2 == (char)(0x47) && x3 == (char)(0x74) && x4 == (char)(0x33))
                || (x2 == (char)(0x56) && x3 == (char)(0x24) && x4 == (char)(0x6A))
                || (x2 == (char)(0x4B) && x3 == (char)(0x22) && x4 == (char)(0x8B))
                || (x2 == (char)(0x68) && x3 == (char)(0x22) && x4 == (char)(0x75))
                || (x2 == (char)(0x47) && x3 == (char)(0x24) && x4 == (char)(0x8B))
                || (x2 == (char)(0x43) && x3 == (char)(0x24) && x4 == (char)(0xC1))
                || (x2 == (char)(0x56) && x3 == (char)(0x24) && x4 == (char)(0xA1))
                || (x2 == (char)(0x58) && x3 == (char)(0x22) && x4 == (char)(0xA1))
                || (x2 == (char)(0x55) && x3 == (char)(0x02) && x4 == (char)(0xA1))
                || (x2 == (char)(0x7E) && x3 == (char)(0x02) && x4 == (char)(0xA1))
                || (x2 == (char)(0x7E) && x3 == (char)(0x24) && x4 == (char)(0xA1))
                || (x2 == (char)(0x55) && x3 == (char)(0x22) && x4 == (char)(0xA1))
                || (x2 == (char)(0x57) && x3 == (char)(0x24) && x4 == (char)(0xA1))
                || (x2 == (char)(0x53) && x3 == (char)(0x22) && x4 == (char)(0xA1))
                || (x2 == (char)(0x53) && x3 == (char)(0x24) && x4 == (char)(0x51))
                || (x2 == (char)(0x4E) && x3 == (char)(0x24) && x4 == (char)(0x52))
                || (x2 == (char)(0x46) && x3 == (char)(0x24) && x4 == (char)(0x0F))
                || (x2 == (char)(0x77) && x3 == (char)(0x24) && x4 == (char)(0x8B))
                || (x2 == (char)(0x4D) && x3 == (char)(0x24) && x4 == (char)(0x51))
                || (x2 == (char)(0x4E) && x3 == (char)(0x24) && x4 == (char)(0x8D))
                || (x2 == (char)(0x4E) && x3 == (char)(0x24) && x4 == (char)(0x89))
                || (x2 == (char)(0x47) && x3 == (char)(0x74) && x4 == (char)(0xC6))
                || (x2 == (char)(0x45) && x3 == (char)(0x24) && x4 == (char)(0x69))
                || (x2 == (char)(0x43) && x3 == (char)(0x74) && x4 == (char)(0xF3))
                || (x2 == (char)(0x53) && x3 == (char)(0x74) && x4 == (char)(0xA1))
                || (x2 == (char)(0x48) && x3 == (char)(0x02) && x4 == (char)(0x8B))
                || (x2 == (char)(0x43) && x3 == (char)(0x74) && x4 == (char)(0x8B))
                || (x2 == (char)(0x4B) && x3 == (char)(0x24) && x4 == (char)(0x0F))

                //BAD FUNCTION AT 0x004998F0
                || (x2 == (char)(0x56) && x3 == (char)(0x74) && x4 == (char)(0x89)) // sure entry
                || (x2 == (char)(0x56) && x3 == (char)(0x74) && x4 == (char)(0x53)) //same addr as sure entry
                //|| (x2 == (char)(0x56) && x3 == (char)(0x76) && x4 == (char)(0x89)) //unsure
                //|| (x2 == (char)(0x4E) && x3 == (char)(0x76) && x4 == (char)(0x8B))
                //|| (x2 == (char)(0x8E) && x3 == (char)(0x94) && x4 == (char)(0x00) && x5 == (char)(0x00) && x6 == (char)(0x00) && x7 == (char)(0x8B))
                //|| (x2 == (char)(0x96) && x3 == (char)(0x96) && x4 == (char)(0x00) && x5 == (char)(0x00) && x6 == (char)(0x00) && x7 == (char)(0x8B))

                //maybe irrelevant code
                //|| (count == 0x00161FB1)
                //|| (count == 0x00161DB9)
                //|| (x2 == (char)(0x46) && x3 == (char)(0x0C) && x4 == (char)(0x6A) && x5 == (char)(0x01) && x6 == (char)(0x8B) && x7 == (char)(0xCE) && x8 == (char)(0xE8) )

                || (x2 == (char)(0x44) && x3 == (char)(0x24) && x4 == (char)(0x4C))

                //movsx with test after
                //|| (x2 == (char)(0x44) && x3 == (char)(0x08) && x4 == (char)(0x0E))
                //|| (x2 == (char)(0x76) && x3 == (char)(0x24) && x4 == (char)(0x85))

                || (x2 == (char)(0x3A) && x3 == (char)(0xA1) && x4 == (char)(0xDE) && x5 == (char)(0x0F))
                || (x2 == (char)(0x33) && x3 == (char)(0xA1) && x4 == (char)(0xDE) && x5 == (char)(0x0F))
                || (x2 == (char)(0x3B) && x3 == (char)(0xA1) && x4 == (char)(0xDE) && x5 == (char)(0x0F))

                || (x2 == (char)(0x32) && x3 == (char)(0xA1) && x4 == (char)(0xDE) && x5 == (char)(0x0F) && x6 == (char)(0x31))

                //|| (x3 == (char)(0xA1) && x4 == (char)(0xDE) && x5 == (char)(0x0F) && x6 == (char)(0x31))
                //|| (x4 == (char)(0xA1) && x5 == (char)(0xDE) && x6 == (char)(0x0F) && x7 == (char)(0x31))
                //|| (x5 == (char)(0xA1) && x6 == (char)(0xDE) && x7 == (char)(0x0F) && x8 == (char)(0x31))
                //|| (x6 == (char)(0xA1) && x7 == (char)(0xDE) && x8 == (char)(0x0F) && x9 == (char)(0x31))
                //|| (x7 == (char)(0xA1) && x8 == (char)(0xDE) && x9 == (char)(0x0F) && x10 == (char)(0x31))
                //|| (x8 == (char)(0xA1) && x9 == (char)(0xDE) && x10 == (char)(0x0F) && x11 == (char)(0x31))
                
                //|| (x2 == (char)(0x8F) && x3 == (char)(0x9E) && x4 == (char)(0x02) && x5 == (char)(0x00) && x6 == (char)(0x00))
               // || (x2 == (char)(0x97) && x3 == (char)(0xA2) && x4 == (char)(0x02) && x5 == (char)(0x00) && x6 == (char)(0x00))

                || (x2 == (char)(0x07) && x3 == (char)(0x8B) && x4 == (char)(0x2D) && x5 == (char)(0xDE))
                || (x2 == (char)(0x07) && x3 == (char)(0x8B) && x4 == (char)(0x0D) && x5 == (char)(0xDE))
                || (x2 == (char)(0x18) && x3 == (char)(0x8B) && x4 == (char)(0x0D) && x5 == (char)(0xDE))

                || (x2 == (char)(0x86) && x3 == (char)(0x76) && x4 == (char)(0x02) && x5 == (char)(0x00) && x6 == (char)(0x00) && x7 == (char)(0x5F))
                || (x2 == (char)(0x8F) && x3 == (char)(0x8A) && x4 == (char)(0x00) && x5 == (char)(0x00) && x6 == (char)(0x00) && x7 == (char)(0x8B))
                || (x2 == (char)(0x80) && x3 == (char)(0x50) && x4 == (char)(0x02) && x5 == (char)(0x00) && x6 == (char)(0x00) && x7 == (char)(0x8B))
            )) {
            x1 = (char)(0xB7);
            ofs2 << "Modified, ADDR[" << std::hex << count << "]: " << (unsigned int)(unsigned char)(x0) << ", " << (unsigned int)(unsigned char)(x1) << ", " << (unsigned int)(unsigned char)(x2) 
                << ", " << (unsigned int)(unsigned char)(x3) << ", " << (unsigned int)(unsigned char)(x4) << ", " << (unsigned int)(unsigned char)(x5) 
                << ", " << (unsigned int)(unsigned char)(x6) << ", " << (unsigned int)(unsigned char)(x7) << ", " << (unsigned int)(unsigned char)(x8)
                << ", " << (unsigned int)(unsigned char)(x9) << ", " << (unsigned int)(unsigned char)(x10) << ", " << (unsigned int)(unsigned char)(x11)
                << std::endl;
        }
    }
    ofs << x2;
    ofs << x3;
    ofs << x4;
    ofs << x5;
    ofs << x6;
    ofs << x7;
    ofs << x8;
    ofs << x9;
    ofs << x10;
    ofs << x11;

    ifs.close();
    ofs.close();

    return 0;
}