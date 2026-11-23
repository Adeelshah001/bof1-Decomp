extern u32 D_080F5C94[];void sub_080A0770(u32);void sub_08007264(s32 a){u32 x=a<<16;u32 mask=0xff0000;u32*t=D_080F5C94;mask &= x;mask>>=17;sub_080A0770(t[mask]);}
