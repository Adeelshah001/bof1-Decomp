void sub_08092F50(u8*);void sub_08092FB8(u8*);void sub_08096A60(u8*);
void sub_08096A24(u8*a){s32 zero;u8*p=a+0x4C;u32 v=*p+1;zero=0;*p=v;p+=8;*p=3;a[0x55]=zero;sub_08092F50(a);}
void sub_08096A4C(u8*a){a[0x55]++;sub_08096A60(a);}
void sub_08096A6C(u8*a){s32 zero;u8*p=a+0x4C;u32 v=*p+1;zero=0;*p=v;p+=8;*p=3;a[0x55]=zero;p+=0xD;*p=1;sub_08092FB8(a);}
extern u8 D_03004F50[];
void *sub_080969C8(u8*a){u8*p=*(u8**)(a+0x6C);u8*b=D_03004F50;u16 *delta=(u16*)(b+0x40);u16 v=*(u16*)(p+0xFA)+*delta;if(v>=*(u16*)(p+0xF8))v=*(u16*)(p+0xF8);*(u16*)(p+0xFA)=v;*delta=0;return p;}
