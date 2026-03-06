// 函数名称: sub_457750
// 虚拟地址: 0x457750
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_457750(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t esi = 1
    int32_t edi = arg1[1]
    int32_t result
    
    if (edi s>= 1)
        result = arg2 - edi
        int32_t edx = edi - 1
        int32_t result_1 = result
        
        while (true)
            if (edx s>= 0 && edx s< edi)
                int32_t ecx = *arg1
                
                if (*(ecx + (edx << 2)) s< result + edx)
                    result = edi - esi
                    
                    if (edi - esi s>= 0 && result s< edi)
                        *(ecx + (result << 2)) += 1
                        int32_t esi_1 = result + 1
                        
                        if (esi_1 s>= edi)
                        label_4577d6:
                            result.b = 1
                            return result
                        
                        int32_t i = esi_1 - 1
                        
                        while (i s>= 0)
                            result = arg1[1]
                            
                            if (i s>= result)
                                break
                            
                            if (i s< 0xffffffff)
                                break
                            
                            if (esi_1 s>= result)
                                break
                            
                            int32_t ecx_1 = *arg1
                            i += 1
                            result = *(ecx_1 + (esi_1 << 2) - 4) + 1
                            *(ecx_1 + (esi_1 << 2)) = result
                            esi_1 += 1
                            
                            if (esi_1 s>= edi)
                                goto label_4577d6
                else
                    result = result_1
                    esi += 1
                    edx -= 1
                    
                    if (esi s> edi)
                        break
                    
                    continue
            
            sub_489550(result, &data_5b2591, "index >= 0 && index < mSize", 
                "d:\ax\trunk\ax2017\engine\xarray.h", 0xb5, "XArray<int>::operator []")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    result.b = 0
    return result
}
