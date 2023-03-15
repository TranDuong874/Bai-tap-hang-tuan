B1.
char c = ‘A', b = ‘B'; 
char* p1 = &c;
char* p2 = &b;
char* p3;

//&c = 0x1234 &b = 0x5678

p3 = &b;
cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;
p3 = p1;
cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;
*p1 = *p2;

Output:
*p3 = B, p3 = 0x5678
*p3 = A, p3 = 0x1234
____________________________________________________
B2.
Cho
int *p;
int i;
int k;
i = 4;
k = i;
p = &i;

k = 5;
*k = 5;
p = 5;
*p = 5;
Trong các lệnh này, lệnh gán cho i giá trị 5 là: *p = 5
____________________________________________________
B3.
char c = ‘C';
double *p = &c;
Lỗi con trỏ không cùng kiểu dữ liệu với biến


