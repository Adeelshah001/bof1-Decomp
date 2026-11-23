// Data declarations
extern u16 D_0202DBD0[];

// Function prototype
extern s32 sub_0805D910(u16, u16 *);

s32 sub_0805D910(u16 arg0, u16 *arg1) {
    u16 val;
    u32 base;
    s32 result;
    
    result = 1;
    base = (u32)D_0202DBD0 + 0x204;
    val = *(u16 *)(base + (arg0 << 1));
    *arg1 = val;
    if ((val & 0xF00) != 0) {
        result = 0;
    }
    return result;
}
