extern u8 D_03002AB0[],D_0202E0C6[],D_0202E0BE[];extern u32 D_03001694;
u8 sub_08037ED4(void*,u16,u16);void sub_0803898C(void*,u8);
u8 sub_0803815C(u8*a,u16*b){u8 v=sub_08037ED4(a,b[1],b[3]);a[0x61]=v;return v;}
void sub_08038808(void){u8 n=0;u8 i=0;do{u8*p=D_03002AB0+i*0x124;if(p[0x3a]){u8 j=n++;D_0202E0C6[j]=p[0x3c];}else{u8 j=n++;D_0202E0C6[j]=0xff;}i++;}while(i<=7);}
void sub_08038880(u8*a,u8*b){s32 x=*(s32*)(a+0x18);u16 y=*(u16*)(a+0x2a);u8*p=a+0xb7;*(u16*)(a+0x2a)=*(u16*)(b+0x2a);*(u16*)(b+0x2a)=y;*(s32*)(a+0x18)=*(s32*)(b+0x18);*(s32*)(b+0x18)=x;sub_0803898C(a,*p);sub_0803898C(b,b[0xb7]);D_03001694|=1;}
void sub_080388C8(void){u8 i=0;u8*p=D_0202E0BE;u8*q=p+8;do{p[i]=q[i];i++;}while(i<=7);}
