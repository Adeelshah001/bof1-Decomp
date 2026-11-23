/* identical to sub_0809EED0 (matched), with its names changed by decompdecomp */
typedef struct {s32 *state;u32 a,b;} AudioSlot;
typedef struct {s32 song;u16 slot;u16 pad;} AudioEntry;
extern AudioSlot D_080BB7EC[];extern AudioEntry D_080BB858[];extern u8 D_00000009[];
void sub_0809ECDC(void*);void sub_0809F4D0(void*,s32);void sub_0809ECDC(void*);
void sub_0809EF08(void){u16 n=(u32)D_00000009;u32 left;AudioSlot*p;if(n){p=D_080BB7EC;left=n;do{sub_0809ECDC(p->state);p++;left--;}while(left);}}
void sub_0809EE68(u16 i){AudioSlot*s=D_080BB7EC;AudioEntry*t=D_080BB858;AudioEntry*e=t+i;s32*p=s[e->slot].state;if(*p==e->song)sub_0809ECDC(p);}
void sub_0809EF44(u8*a,u16 b){if(*(u32*)(a+0x34)==0x68736d53){*(u16*)(a+0x26)=b;*(u16*)(a+0x24)=b;{s32 x=0x101;*(s16*)(a+0x28)=x;}}}
void sub_0809EE14(u16 i){AudioSlot*s=D_080BB7EC;AudioEntry*t=D_080BB858;AudioEntry*e=t+i;s32*p=s[e->slot].state;s32 a=p[0],b=e->song;if(a!=b)sub_0809F4D0(p,b);else{ s32 f=p[1];if(*(u16*)(p+1)==0)sub_0809F4D0(p,a);else if(f<0)sub_0809ECDC(p);}}
