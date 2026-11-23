extern u8 D_030023DC[],D_03003520[],D_03002AB0[];
void sub_0800B5D4(void);void sub_08007514(void);void sub_08007494(void);void sub_080074A4(void);void sub_080074B4(void);void sub_080074C4(void);void sub_080074D4(void);void sub_080074E4(void);void sub_080074F4(void);void sub_08007504(void);
void sub_0800844C(void){if(D_030023DC[0]!=1){u8*p=D_03004830;p[0x2b]++;}}
void sub_080084E4(void){u8*p=D_03004830;if((s8)p[0x2c]==0){u8*q;sub_08007514();sub_080074A4();sub_08007494();sub_080074B4();sub_080074C4();sub_080074D4();sub_080074E4();sub_080074F4();sub_08007504();q=D_03002AB0;(*(s32*)(q+0x88))++;p[0x2b]++;}}
void sub_080083B0(void){u16*p=(u16*)D_03003520;u8*q;p[1]=0x278;p[3]=0x213c;p+=0x40;p[1]=0x298;p[3]=0x213c;sub_0800B5D4();q=D_03004830;q[0x2b]++;}
void sub_08008390(void){s8*p=(s8*)D_03004830;if(p[0x2c]==0){p[0x2c]=127;(*(u8*)(p+0x2b))++;}}
