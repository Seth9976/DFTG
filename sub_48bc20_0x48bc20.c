// 函数名称: sub_48bc20
// 虚拟地址: 0x48bc20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_48bc20(int32_t* arg1, void* arg2, int32_t** arg3, char* arg4)
{
    // 第一条实际指令: void* result = arg2
    void* result = arg2
    char const* const var_2c_1
    int32_t var_28_1
    char const* const var_24_1
    char* ecx
    
    if (arg2 s> 0)
        void** eax_1
        
        if (arg3[2] != 0)
            arg1 = arg3[1]
            
            if (arg1 != 0)
                void* eax_2 = *arg1
                
                if (0xfde8 - *(eax_2 + 0xfdec) - *(eax_2 + 0xfde8) s>= 1)
                    goto label_48bc9a
                
                void* var_14 = sub_48b100()
                eax_1 = &var_14
                goto label_48bc8f
        else
            void* var_10 = sub_48b100()
            eax_1 = &var_10
        label_48bc8f:
            sub_4362d0(arg3, eax_1)
            arg2 = result
        label_48bc9a:
            char* var_c_1 = arg4
            arg1 = arg3[1]
            
            if (arg1 != 0)
                void* eax_7
                void* ebx_1
                
                while (true)
                    ebx_1 = *arg1
                    void* eax_5 = *(ebx_1 + 0xfde8)
                    int32_t ecx_4 = *(ebx_1 + 0xfdec)
                    void* esi_2 = 0xfde8 - eax_5 - ecx_4
                    eax_7 = eax_5 + ecx_4 + ebx_1
                    
                    if (esi_2 s>= arg2)
                        break
                    
                    if (esi_2 s> 0)
                        sub_579300(eax_7, var_c_1, esi_2)
                        *(ebx_1 + 0xfdec) += esi_2
                        var_c_1 += esi_2
                        result -= esi_2
                    
                    void* eax_8 = sub_48b100()
                    int32_t** eax_9 = sub_498440(0xc)
                    eax_9[3] += 1
                    arg1 = *eax_9
                    
                    if (arg1 == 0)
                        sub_4982d0(eax_9)
                        arg1 = *eax_9
                    
                    *eax_9 = *arg1
                    arg1[2] = 0
                    *arg1 = eax_8
                    arg1[1] = 0
                    arg1[2] = arg3[1]
                    void* ecx_8 = arg3[1]
                    
                    if (ecx_8 == 0)
                        arg3[2] += 1
                        arg2 = result
                        *arg3 = arg1
                        arg3[1] = arg1
                    else
                        arg2 = result
                        *(ecx_8 + 4) = arg1
                        arg3[2] += 1
                        arg3[1] = arg1
                
                sub_579300(eax_7, var_c_1, arg2)
                *(ebx_1 + 0xfdec) += result
                return result
        var_24_1 = "XList<struct NetBuffer *>::GetTail"
        var_28_1 = 0x5a
        ecx = "mpTail != NULL"
        var_2c_1 = "d:\ax\trunk\ax2017\engine\xlist.h"
    else
        var_24_1 = "NetBufferListAppendData"
        var_28_1 = 0x243
        var_2c_1 = "d:\ax\trunk\ax2017\engine\network.cpp"
        ecx = "length > 0"
    
    sub_489550(arg1, &data_5b2591, ecx, var_2c_1, var_28_1, var_24_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
