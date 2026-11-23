extern s32 sub_0803E100(void *,u32),sub_0803E11C(void *,u32);
typedef struct {u32 pad[4];u32 a,b;} MotionCheck;
u8 sub_0803E004(MotionCheck *p){
s32 r;
if(p->a) r=sub_0803E100(p,p->a);
else {if(!p->b)return 1; r=sub_0803E11C(p,p->b);}
return (u8)r;
}
