extern u8 D_03004830[];
extern void sub_08054B60(void);

typedef struct {
    u8 pad00[0xF8];
    void (*callback)(void);
} StateBlock_A9E0;

void sub_0801A9E0(void) {
    ((StateBlock_A9E0 *)D_03003420)->callback = sub_08054B60;
    D_03004830[0x2B]++;
}
