// 函数名称: sub_426ed0
// 虚拟地址: 0x426ed0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_426ed0(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    
    if (arg1[1] != arg3 || *arg1 != arg2 || arg1[2] != arg4 || arg1[3] != 0)
    label_426f1e:
        int32_t eax_2 = sub_4bab10(arg4)
        arg1[8] = eax_2
        
        if (eax_2 == 0)
            return eax_2
        
        arg1[1] = arg3
        eax_1 = eax_2
        *arg1 = arg2
        arg1[2] = arg4
        arg1[3] = 0
    else
        eax_1 = arg1[8]
        
        if (eax_1 == 0)
            goto label_426f1e
        
        uint32_t ecx = zx.d(eax_1.w)
        
        if (ecx u>= data_63e5ac || *(ecx * 0x1418 + data_63e5a8 + 0x1410) != eax_1)
            goto label_426f1e
    
    return eax_1
}
