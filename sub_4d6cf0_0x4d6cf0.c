// 函数名称: sub_4d6cf0
// 虚拟地址: 0x4d6cf0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4d6cf0(int32_t arg1, int32_t* arg2, uint32_t arg3, void* arg4, int32_t arg5, char* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    void* edi = arg4
    int32_t* ebx = arg2
    uint32_t result = *(*(edi + 0x18) + 0xc)
    uint32_t result_1 = result
    char const* const ecx
    char* var_24
    
    if (result != 0)
        void* esi = nullptr
        arg4 = nullptr
        
        if (arg5 s<= 0)
            return result
        
        while (true)
            char* ecx_2
            result, ecx_2 = sub_4ce110(*(edi + 0x18))
            char* edx = *(edi + 4)
            
            if (result.b == 0)
                var_24 = ecx_2
                
                if (edx == 0)
                    char const* const var_28_5 = "XString::XString"
                    int32_t var_2c_4 = 0x94
                    char const* const var_30_2 = "d:\ax\trunk\ax2017\engine\xstring.cpp"
                    ecx = &data_5efbf0
                    break
                
                sub_48a2c0(&var_24, edx)
                sub_4d63c0(arg3)
                result = arg3
                
                if (*(result + 0xc) s> 0)
                    int32_t* esi_1 = *(result + 8)
                    
                    if (esi_1 == 0)
                        var_24 = "XList<struct DefParseItem *>::GetTail"
                        int32_t var_28_4 = 0x5a
                        char const* const var_2c_3 = "d:\ax\trunk\ax2017\engine\xlist.h"
                        ecx = "mpTail != NULL"
                        break
                    
                    int32_t edx_2 = *(edi + 0x28)
                    void* esi_2 = *esi_1
                    *(esi_2 + 0x10) = (edx_2 u>> 9).b & 1
                    *(esi_2 + 0x11) = (edx_2 u>> 0xa).b & 1
                    esi = arg4
                
                var_24 = arg6
                result = sub_4d78c0(*(edi + 0x18), var_24)
            else
                var_24 = nullptr
                int32_t var_28_2 = 0
                result = sub_4d6590(result, ebx, arg3, *(edi + 0x18), edx, 0, var_24)
            
            ebx += result_1
            esi += 1
            arg4 = esi
            
            if (esi s>= arg5)
                return result
    else
        var_24 = "DefinitionGetSize"
        int32_t var_28_1 = 0x6d
        char const* const var_2c_1 = "d:\ax\trunk\ax2017\engine\definition.cpp"
        ecx = "pDefMap->definitionSize != 0"
    sub_489550(result, &data_5b2591, ecx)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
