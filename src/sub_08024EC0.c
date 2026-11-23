extern u8 D_03002AB0[],D_030033F0[];void sub_08004EA0(s32);void sub_08024008(s32);void sub_08040A74(s32);
void sub_08024F78(void){u8*p=D_03004830;if(--p[0x41]==0)p[0x40]++;}
void sub_08024EE8(void){u8*p;u8*q;u32 z;sub_08004EA0(0x818a);p=D_03002AB0;p[0xb8]&=0xfb;z=0;q=D_03004830;q[0x3f]=z;q[0x40]=z;}
void sub_08024EC0(void){u8*p;sub_08024008(0x4e);p=D_03004830;p[0x3f]=0;p[0x40]=0;}
void sub_08024E94(void){u8*p;D_030033F0[0]|=2;sub_08040A74(0x24);p=D_03004830;p[0x40]++;}
