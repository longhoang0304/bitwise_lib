#ifndef bitwise_h
#define bitwise_h
	/* lấy giá trị bit thứ n của số x*/
	int getbit(int , int );
	/* lấy giá trị từ bit i->j (i < j)*/
	int getnum(int , int , int );
	/* bật bit thứ n*/
	int biton(int , int );
	/* tắt bit thứ n*/
	int bitoff(int , int );
	/* kiểm tra xem có phải dạng 2^n*/
	int ispowtwo(int );
	/* kiểm tra xem co n bit kề nhau hay ko*/
	int isbitset(int, int);
	/* đổi giá trị a, b*/
	void bswap(int *, int *);
	/* a = -a, nhanh hơn */
	int neg(int);
	/* |a| */
	int babs(int);
	/* kt số chẵn*/
	int isEven(int);
	/* bật/tắt bit ở vị trí thứ n*/
	int togglebit(int, int);
	/*tắt bit có giá trị 1 ở phía bên phải cung`, 100100 -> 100000*/
	int offRMostOne(int);
	/* tim` vị trí bit 1 ở phảii cùng 101100 -> 0000100*/
	int FindRMostOne(int);
	/* chuyển tất cả các số 0 sau bit 1 phải cùng thành bit 1, 100100 -> 100111*/
	int TRMostOneb(int);
	/* tìm vị trí bit 0 ở phải cùng dãy bit, 10101011 -> 00000100*/
	int FindRMostZero(int);
	/* bật bit 0 ở vị trí phải cùng thành 1, 10100011 -> 10100111*/
	int onRMostZero(int);
#endif

