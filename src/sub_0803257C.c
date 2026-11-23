extern u16 D_03004114; extern u8 D_030023E0[],D_030016E0[];
typedef struct {u8 pad[0x4d]; u8 state; u8 pad2[2]; u8 substate;} Obj;
void sub_0803257C(Obj*p){u8*q; D_03004114=0; q=D_030023E0; if(*(u16*)(q+0xa4)==0){p->state=4;p->substate=0;D_03004114=1;}}
s32 sub_080326D8(u8*p){u32 result=0; if(D_030023D0[0]==0){if(!(p[0xb8]&4)){u8*q=D_030016E0;if(*(u16*)(q+6)&4)p[0xbe]=1;}} return result;}
