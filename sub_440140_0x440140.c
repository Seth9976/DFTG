// 函数名称: sub_440140
// 虚拟地址: 0x440140
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_440140(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t esi_1 = arg2 * 0x1bc + arg3
    int32_t esi_1 = arg2 * 0x1bc + arg3
    int32_t result
    int32_t edi_1
    
    if (data_1390334 != 0)
        edi_1 = *arg5
        result = 0
    
    int32_t edx
    
    if (data_1390334 == 0 || edi_1 s<= 0)
    label_440174:
        int32_t edi_2 = *arg5
        result = 0
        
        if (edi_2 s> 0)
            while (true)
                edx = arg4[result]
                
                if (*(esi_1 + (edx << 3) + 0x24) != 6)
                    break
                
                result += 1
                
                if (result s>= edi_2)
                    *arg5 = 1
                    return result
            
            *arg4 = edx
    else
        while (true)
            edx = arg4[result]
            
            if (*(esi_1 + (edx << 3) + 0x24) == 6)
                data_1390334 = 0
                break
            
            result += 1
            
            if (result s>= edi_1)
                goto label_440174
        
        *arg4 = edx
    *arg5 = 1
    return result
}
