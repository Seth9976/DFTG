// 函数名称: sub_4dcba0
// 虚拟地址: 0x4dcba0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4dcba0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void var_28
    void var_28
    sub_4dc830(&var_28, *arg2, arg1, &var_28)
    
    if (arg2[2] != 2)
        return sub_4892e0("Unknown attachment type")
    
    int32_t* result = sub_4dd880(arg2[3])
    int64_t var_14
    *(result + 8) = var_14
    int32_t var_c
    result[4] = var_c
    int128_t var_24
    *(result + 0x14) = var_24
    return result
}
