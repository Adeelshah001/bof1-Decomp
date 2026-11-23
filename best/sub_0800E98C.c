extern void sub_08004EA0(s32);
void sub_0800E904(Entity*p){u8*b=D_03004830;if((s8)b[0x2d]==4)p->unk68+=2;}
void sub_0800E8B4(Entity*p){sub_08004EA0(0x814b);p->unk68+=2;}
void sub_0800E898(Entity*p){sub_08004EA0(0x817c);p->unk68+=2;}
void sub_0800E98C(Entity*p){u8*b=D_03004830;s8 v=b[0x2d];s32 x;if(v){if(v==1)x=p->unk68+2;else x=p->unk68+15;p->unk68=x;}}
