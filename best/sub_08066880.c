#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
M2C_UNK sub_0805B358(s32, s32, s32, s32, s32);
M2C_UNK sub_08068984(s32, s32, s32, s32, M2C_UNK *);
s32 sub_08068EF4(s32);
M2C_UNK sub_0809D860(M2C_UNK *, M2C_UNK *);
M2C_UNK sub_0809D874(M2C_UNK *, M2C_UNK *);
extern M2C_UNK sub_0814BE32;
extern M2C_UNK sub_0814BE44;
s32 sub_08066880(void)
{
  void *new_var2;
  M2C_UNK sp4;
  void *new_var;
  u8 *temp_r4;
  new_var = ((void *) 0x030016E0) + 0xB;
  new_var2 = (void *) 0x030016E0;
  temp_r4 = ((*((u8 *) (((s8 *) new_var2) + 1))) * 0xC) + new_var;
  sub_08068984(0, 1, 1, 0, (M2C_UNK *) 0x0814BE1A);
  sub_0809D860(&sp4, &sub_0814BE32);
  sub_0809D874(&sp4, sub_08068EF4(3) + 1);
  sub_0809D874(&sp4, &sub_0814BE44);
  sub_08068984(0, 1, 3, 0, &sp4);
  sub_08068984(0, 8, 7, 0, (M2C_UNK *) 0x0814BE6A);
  sub_08068984(0, 0x13, 7, 0, (M2C_UNK *) 0x0814BE6E);
  sub_0805B358(0x0814C4E8, 1, 1, 0, 2);
  *temp_r4 += 1;
  return 1;
}

