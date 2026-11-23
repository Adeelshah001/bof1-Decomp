void sub_0809ACF8(u8*);u32 sub_08003104(void);void sub_08037FC4(u8*,s32);void sub_0803EE6C(u8*);void sub_080995D4(u8*);
void sub_0809ACD0(u8*a){u8*p=a+0x54;if(--*p==0){p-=8;(*p)++;sub_0809ACF8(a);}}
void sub_0809AC84(u8*a){s32 x=0x2f2a;u32 v;*(s16*)(a+6)=x;x+=0xd5;*(s16*)(a+0x2c)=x;{u32 n=15;a[0x54]=n;}v=sub_08003104()<<24;{u32 mask=0x0f000000;mask&=v;v=mask+0x42000000;}a[2]=v>>24;sub_08037FC4(a,4);a[0x4c]++;sub_0809ACD0(a);}
void sub_0809AD64(u8*a){u16 x=*(u16*)(a+6)+8;u32 z=0;*(u16*)(a+6)=x;*(u16*)(a+0x2c)=x;if(x>0x2ffe){sub_0803EE6C(a);a[0x54]=z;a[0x55]=z;}}
void sub_0809AD98(u8*a){s32 x=0xf50;s32 y;*(s16*)(a+2)=x;y=0x2f20;*(s16*)(a+6)=y;*(s16*)(a+0x2c)=y;sub_080995D4(a);}
