// 函数名称: sub_4722b0
// 虚拟地址: 0x4722b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4722b0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t edx = data_632564
    int32_t edx = data_632564
    int32_t* result
    
    if (edx != arg1[0x22a])
        if (edx == arg2[0x22a])
            result.b = 1
            return result
        
        int32_t edx_1 = *arg1
        int32_t esi_1 = *arg2
        
        if (edx_1 s< esi_1)
            result.b = 1
            return result
        
        if (edx_1 s<= esi_1)
            int32_t edi_1 = arg1[0x78]
            int32_t ebx_1 = arg2[0x78]
            
            if (edx_1 == 0)
                if (esi_1 != 0)
                    sub_489550(arg1, &data_5b2591, "b->type == ROLLGFX_TILE", 
                        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x686a, "CompareGfx")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                int32_t edx_2 = arg1[0xf]
                int32_t temp1_1 = arg2[0xf]
                
                if (edx_2 s< temp1_1)
                    result.b = 1
                    return result
                
                if (edx_2 s<= temp1_1)
                    int32_t edx_3 = arg1[0xd]
                    int32_t temp2_1 = arg2[0xd]
                    
                    if (edx_3 s< temp2_1)
                        result.b = 1
                        return result
                    
                    if (edx_3 s<= temp2_1)
                        if (edx_3 != 4 && edx_3 != 5)
                            goto label_472340
                        
                        if (edi_1 s<= ebx_1)
                            if (edi_1 s>= ebx_1)
                                result.b = arg1 u> arg2
                                return result
                            
                            result.b = 1
                            return result
            else if (edx_1 != 1)
            label_472340:
                
                if (edi_1 s<= ebx_1)
                    if (edi_1 s>= ebx_1)
                        result.b = arg1 u< arg2
                        return result
                    
                    result.b = 1
                    return result
            else
                int32_t edx_4 = arg1[4]
                int32_t temp0_1 = arg2[4]
                
                if (edx_4 s< temp0_1)
                    result.b = 1
                    return result
                
                if (edx_4 s<= temp0_1)
                    if (edx_4 != 4)
                        goto label_472340
                    
                    int32_t edx_5 = arg1[7]
                    int32_t temp3_1 = arg2[7]
                    
                    if (edx_5 s< temp3_1)
                        result.b = 1
                        return result
                    
                    if (edx_5 s<= temp3_1)
                        goto label_472340
    
    result.b = 0
    return result
}
