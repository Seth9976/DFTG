// 函数名称: sub_527bb0
// 虚拟地址: 0x527bb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_527bb0(int32_t arg1)
{
    // 第一条实际指令: int32_t eax = data_1151ae0
    int32_t eax = data_1151ae0
    int32_t* result
    
    if (eax == 0)
        int32_t var_8_1 = 0x1c
        result = _malloc()
    else
        result =
            eax(0x1c, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x3c)
    
    if (result != 0)
        __builtin_memset(&result[2], 0, 0x14)
    
    result[1] = arg1
    *result = 0x3f800000
    return result
}
