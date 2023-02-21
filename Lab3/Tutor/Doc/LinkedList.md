# Node

<p align="center">
    <img src="https://user-images.githubusercontent.com/68283753/220370476-9a94a919-bded-4850-9e8e-d80b9646dfdd.png" width="350" title="hover text">
</p>

## ประกาศ .h file

<p align="center">
    <img src="https://user-images.githubusercontent.com/68283753/220371576-3ae805c5-2ab8-4a03-926c-e83c3c2d98fd.png" width="350" title="hover text">
</p>

### #ifndef NODE_H
หมายถึง หากยังหา define ของ NODE_H ไม่ได้

### #define NODE_H
หมายถึง ให้ define NODE_H ได้เลย

### #endif
หมายถึง สิ้นสุดการ define ของ define นั้นๆแล้ว

## Class

<p align="center">
    <img src="https://user-images.githubusercontent.com/68283753/220372798-63514a4b-a1d6-4652-9bb3-5fd04f92c109.png" width="350" title="hover text">
</p>

### class Node
หมายถึง สร้าง class Node ขึ้นมา

## Private & Public

<p align="center">
    <img src="https://user-images.githubusercontent.com/68283753/220373253-933345d7-fccd-48be-87eb-f8e4d2cb1b78.png" width="350" title="hover text">
</p>

### Private
คือ การเก็บตัวแปรหรือ Function ไว้ให้เป็นแบบ private โดย ตัวแปรหรือ function ใน private (เรียกว่า attribute) จะสามารถเข้าถึงได้แค่ภายใน class เท่านั้น เช่นตัวอย่างสามารถเข้าถึง private ได้แค่ใน class Node เท่านั้น

### Public
คือ การเก็บ attribute ที่สามารถเข้าถึงได้จากที่ใดก็ได้ เช่น ไฟล์อื่นๆ อย่าง main.cpp จะสามารถเข้าถึง attribute ของ class Node ได้

<p align="center">
    <img src="https://user-images.githubusercontent.com/68283753/220374833-d5e8b98a-ebc3-4c06-9368-3e919d32161b.png" width="350" title="hover text">
</p>

# LinkedList

<p align="center">
    <img src="https://user-images.githubusercontent.com/68283753/220376784-7dc8e43e-d295-4be7-9c58-66c4016da688.png" width="350" title="hover text">
</p>

LinkedList คือ Node ที่นำมาต่อกัน เหมือนกันขบวนรถไฟ

<p align="center">
    <img src="https://user-images.githubusercontent.com/68283753/220378202-6a835732-d387-4e8e-87fa-ed9bfb924302.png" width="350" title="hover text">
</p>

## Private
โดย LinkedList นั้นเราควรจะมี head, tail และ size ส่วน cursor นั้นจะมีหรือไม่มีก็ได้

### Head 
หมายถึง ส่วนหัวของ LinkedList หรือก็คือ Node แรกที่อยู่ภายใน LinkedList จึงต้องประกาศตัวแปร เป็น Node* เนื่องจาก สิ่งที่จะมาเป็น head ของ LinkedList ได้นั้นต้องเป็น Node

### Tail
หมายถึง ส่วนหางของ LinkedList เหมือนกัน Head แค่เพียงอยู่ด้านหลังแทน

### Cursor
หมายถึง เหมือนนิ้วมือที่เอาไว้ชี้ Node ต่างๆ ภายใน LinkedList

<p align="center">
    <img src="https://user-images.githubusercontent.com/68283753/220380433-a533f39b-f5f3-4e73-9193-eebb58b4b256.png" width="350" title="hover text">
</p>

## Public
ในเมื่อ LinkedList นั้นเหมือนรถไฟดังนั้น เราจึงต้องเขียน Function ที่ทำให้ LinkedList นั้นสามารถ เพิ่มหรือเอาขบวนรถไฟ เข้า/ออก ได้ด้วย โดย Function หลักๆก็จะมี insert และ remove

### Insert Function

<p align="center">
    <img src="https://user-images.githubusercontent.com/68283753/220381957-da29f6bb-b0f3-4e37-aa7e-dafa369a75de.png" width="300" title="hover text">
    <img src="https://user-images.githubusercontent.com/68283753/220382889-64ca837f-6446-42b0-a229-b100d8f5872a.png" width="300" title="hover text">
    <img src="https://user-images.githubusercontent.com/68283753/220383564-fc8620a9-7f60-4b0f-a388-f832950b9d88.png" width="300" title="hover text">
</p>



insert นั้นเราจะแบ่งเป็น 3 ส่วนก็คือ 

- เพิ่มใน Index ที่ 0

- เพิ่มใน Index สุดท้าย

- เพิ่ม ระหว่าง จุดที่ 0 และ จุดสุดท้าย

### ตำแหน่งที่ 0
<p align="center">
    <img src="https://user-images.githubusercontent.com/68283753/220381957-da29f6bb-b0f3-4e37-aa7e-dafa369a75de.png" width="400" title="hover text">
</p>

จะมี 2 กรณีคือ
- เมื่อขนาดของ LinkedList เป็น 0 หรือก็คือเพิ่ม Node เข้าไปเป็นตัวแรกของ LinkedList ดังนั้น head และ tail ของ LinkedList จะเป็น Node เดียวกัน

- เมื่อขนาดของ LinkedList ไม่ใช่ 0 ดังนั้นเวลาเรา insert สิ่งที่เปลี่ยนไปจะมีเพียงแค่ head เท่านั้น และ tail จะไม่เปลี่ยน เนื่องจากเรา insert ที่ index 0

### ตำแหน่งสุดท้าย
<p align="center">
    <img src="https://user-images.githubusercontent.com/68283753/220382889-64ca837f-6446-42b0-a229-b100d8f5872a.png" width=" 400" title="hover text">
</p>

การเพิ่มในตำแหน่งสุดท้ายนั้น เราจำเป็นต้องใช้ for loop เพราะว่า LinkedList นั้นไม่สามารถบอกได้ว่า ตำแหน่งสุดท้ายของตนเองอยู่ตรงไหน ดังนั้น เราจึงต้อง for เพื่อวนให้ cursor ไปหาตำแหน่งสุดท้าย และจึงค่อยเปลี่ยน Node ที่ตำแหน่งสุดท้ายเป็น Node ที่เราใส่ไป

### ตำแหน่งใดๆ
<p align="center">
    <img src="https://user-images.githubusercontent.com/68283753/220383564-fc8620a9-7f60-4b0f-a388-f832950b9d88.png" width="500" title="hover text">
</p>

การเพิ่มในตำแหน่งใดๆ เหมือนกับตำแหน่งสุดท้ายแต่เพียงต้อง for loop ตามตำแหน่งที่ input มา






