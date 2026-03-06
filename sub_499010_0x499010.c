// 函数名称: sub_499010
// 虚拟地址: 0x499010
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_499010(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t var_c = arg2
    
    if (arg4[1] s> 0)
        int32_t edi_1 = 0
        
        do
            int32_t* ecx = *arg4
            int32_t eax = *(ecx + edi_1 + 4)
            
            if (eax == arg2 || eax == 0xffffffff)
                if ((*(**(ecx + edi_1) + 4))(arg3) != 0)
                    return *arg4 + i * 0x1c
                
                arg2 = var_c
            
            i += 1
            edi_1 += 0x1c
        while (i s< arg4[1])
    
    return 0
}
