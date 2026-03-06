// 函数名称: sub_426e60
// 虚拟地址: 0x426e60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_426e60(int32_t* arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (arg1[1] != arg3 || *arg1 != arg2 || arg1[2] != 0xffffffff)
    label_426ea7:
        result = sub_4baa30(arg2, arg3)
        arg1[8] = result
        
        if (result == 0)
            return result
        
        arg1[1] = arg3
        *arg1 = arg2
        arg1[2] = 0xffffffff
    else
        result = arg1[8]
        
        if (result == 0)
            goto label_426ea7
        
        uint32_t ecx = zx.d(result.w)
        
        if (ecx u>= data_63e5ac || *(ecx * 0x1418 + data_63e5a8 + 0x1410) != result)
            goto label_426ea7
    
    return result
}
