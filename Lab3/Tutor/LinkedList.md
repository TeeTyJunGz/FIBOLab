อธิบาย Node คร่าวๆ

<p align="center">
    <img src="https://user-images.githubusercontent.com/68283753/220370476-9a94a919-bded-4850-9e8e-d80b9646dfdd.png" width="350" title="hover text">
</p>



#ifndef NODE_H
// ถ้าหากไม่เจอ NODE_H
#define NODE_H
// ให้ define NODE_H
class Node
{
    private:    //attribute private สามารถใช้ได้แค่ภายใน class เท่านั้น เช่น class Node สามารถใช้ได้เท่านั้นเมื่อประกาศ private ใน class Node
        int value;  //สร้าง ตัวแปร int ชื่อ value ไว้เก็บ ค่าหรือข้อมูลของ Node
        Node* next; //สร้าง ตัวแปร Node* ชื่อ next เอาไว้บอกว่า Node ต่อไปของตัวเองคืออะไร
    public: //attribute public เป็น attribute ที่สามารถใช้ได้ทุกที่ ไม่ว่าจะเป็น ภายใน Node หรือ นอก Node class
        Node(); //เป็น constructor ของ class ส่วนมากจะมีทุก class
        Node(int newValue, Node* newNode);  //เป็น constructor อีกรูปแบบ ที่สามารถกำหรดตัวแปร private ใน class ได้เลย
        int getValue();
        void setValue(int newValue);
        Node* getNext();
        void setNext(Node* newNode);

};

#endif
