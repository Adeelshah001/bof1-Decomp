#ifndef BOF_BG_AFFINE_TYPES
typedef struct {
    s32 texX, texY;
    s16 screenX, screenY;
    s16 scaleX, scaleY;
    u16 angle;
} BgAffineSource;

typedef struct {
    s16 pa, pb, pc, pd;
    s32 x, y;
} BgAffineResult;

typedef struct {
    u8 pad00[0x12];
    s16 scaleX;
    u8 pad14[4];
    s16 scaleY;
    u8 pad1A[2];
    u32 x, y;
} SceneAffineState;

extern SceneAffineState D_030045B0;
void sub_080A020C(const BgAffineSource *, BgAffineResult *, s32);
#endif

void sub_0809B3D0(u8 mode, s32 unused)
{
    BgAffineSource source;
    BgAffineResult result;
    SceneAffineState *state;
    BgAffineSource *params;
    u16 angle;

    if (mode == 0) {
        D_030045B0.scaleY += 4;
        state = &D_030045B0;
    } else {
        D_030045B0.scaleX += 4;
        D_030045B0.scaleY += 4;
        state = &D_030045B0;
    }

    params = &source;
    angle = 0;
    params->screenX = 120;
    params->screenY = 80;
    params->texX = state->x << 8;
    params->texY = state->y << 8;
    params->scaleX = state->scaleX;
    params->scaleY = state->scaleY;
    source.angle = angle;
    sub_080A020C(&source, &result, 1);
    state->x = result.x;
    state->y = result.y;
}
