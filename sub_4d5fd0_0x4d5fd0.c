// 函数名称: sub_4d5fd0
// 虚拟地址: 0x4d5fd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __convention("regparm")sub_4d5fd0(int32_t arg1, void* arg2, int32_t* arg3, void* arg4, char arg5))[0x4]
{
    // 第一条实际指令: uint32_t (* result)[0x4] = arg3
    uint32_t (* result)[0x4] = arg3
    int32_t* result_1 = result
    
    if (arg5 == 0)
        result = sub_4ce680(arg3, arg2)
    
    if (arg4 == 0)
        return result
    
    *(arg4 + 0x10) = arg2
    
    if (*(arg2 + 0x18) != 0 && *(arg2 + 0x14) != 0)
        int32_t* esi_1 = *(arg4 + 4)
        
        if (esi_1 == 0)
        label_4d603b:
            result = nullptr
        else
            while (true)
                int32_t* eax = *esi_1
                char* const ecx = &data_5b2591
                esi_1 = esi_1[1]
                char* eax_1 = *eax
                
                if (eax_1 != 0)
                    ecx = eax_1
                
                if (__stricmp(ecx, "_version") == 0)
                    int32_t* ecx_2 = &data_5b2591
                    int32_t* eax_4 = eax[1]
                    
                    if (eax_4 != 0)
                        ecx_2 = eax_4
                    
                    result = __atoi64(ecx_2)
                    break
                
                if (esi_1 == 0)
                    goto label_4d603b
        
        int32_t ecx_1 = *(arg2 + 0x18)
        
        if (result != ecx_1)
            int32_t* esi_2 = *(arg4 + 0x10)
            int32_t edx = esi_2[5]
            
            if (edx != 0)
                result = edx(arg4, result, ecx_1)
                
                if (result.b == 0)
                    int32_t var_24_4 = *esi_2
                    sub_489550(sub_4892e0("Difficult versioning function failed on '%s'"), 
                        &data_5b2591, "result", "d:\ax\trunk\ax2017\engine\defparsetree.cpp", 0x46e, 
                        "DefParseReadBlock")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
    
    return sub_4d5d60(result, arg2, result_1, arg4)
}
