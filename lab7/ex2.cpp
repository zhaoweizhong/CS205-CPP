#include <iostream>
#include <string>

struct Box {
    std::string maker;
    float height;
    float width;
    float length;
    float volume;
};

void display(Box box) {
    std::cout << "Maker: " << box.maker << std::endl;
    std::cout << "Height: " << box.height << std::endl;
    std::cout << "Width: " << box.width << std::endl;
    std::cout << "Length: " << box.length << std::endl;
    std::cout << "Volume: " << box.volume << std::endl;
}

void set_volume(Box *box) {
    box->volume = box->height * box->length * box->width;
}

int main() {
    Box *ptr = new Box;
    ptr->maker = "SUSTC";
    ptr->height = 3.4;
    ptr->width = 4.5;
    ptr->length = 5.6;
    ptr->volume = 0;
    std::cout << "Before setting volume: " << std::endl;
    display(*ptr);
    set_volume(ptr);
    std::cout << "After setting volume: " << std::endl;
    display(*ptr);
}