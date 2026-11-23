void sub_08004EA0(s32 arg0);
void sub_08054B60(void);
u8 sub_08019DBC(s32 arg0);

extern u8 D_03003420[];
extern u8 D_03004830[];

typedef struct {
    u8 pad[0xF8];
    void *func_ptr;
} ActorState;

void sub_0801B8E4(void)
{
    sub_08004EA0(0x8479);
    ((ActorState *)D_03003420)->func_ptr = &sub_08054B60;
    D_03004830[0x2C] = 0xEC;
    D_03004830[0x2B]++;
}

void sub_0801B948(void)
{
    if (sub_08019DBC(6) == 0) {
        D_03004830[0x2C] = 0xFF;
        D_03004830[0x2B]++;
    }
}
