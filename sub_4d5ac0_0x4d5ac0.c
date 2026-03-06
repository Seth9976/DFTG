// 函数名称: sub_4d5ac0
// 虚拟地址: 0x4d5ac0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __convention("regparm")sub_4d5ac0(void* arg1, void* arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: if (arg4 == 0)
    if (arg4 == 0)
    label_4d5b76:
        *arg3 = 0
        arg3[2] = 0
        return 
    
    int32_t ecx = *(arg4 + 0xc)
    *(arg4 + 0x10) = 0
    
    if (ecx == 0)
        goto label_4d5b76
    
    arg1 = *(arg2 + 0xc)
    char const* const var_24
    int32_t var_20_1
    char const* const var_1c_1
    char* ecx_1
    
    if (*(arg1 + 0x10) == 0x13)
        void* eax = *(arg2 + 0x1c)
        arg1 = sub_4c2e40(ecx << 4)
        arg3[2] = arg1
        int32_t ebx_1 = 0
        int32_t* i = *(arg4 + 4)
        
        if (i == 0)
        label_4d5b56:
            *arg3 = ebx_1
            
            if (ebx_1 != 0)
                return 
            
            arg1 = arg3[2]
            
            if (arg1 == 0)
                arg3[2] = 0
                return 
            
            _aligned_free_base(arg1)
            arg3[2] = ebx_1
            return 
        
        void* edi_1 = nullptr
        
        if (i != 0)
            do
                int32_t var_1c_2 = *i
                i = i[1]
                int32_t* ecx_4 = arg3[2]
                arg1 = sub_4d5710(arg1, edi_1 + ecx_4, eax, ecx_4)
                
                if (arg1.b != 0)
                    ebx_1 += 1
                    edi_1 += 0x10
            while (i != 0)
            
            goto label_4d5b56
        
        var_1c_1 = "XList<struct DefParseItem *>::GetNextIter"
        var_20_1 = 0x1a1
        var_24 = "d:\ax\trunk\ax2017\engine\xlist.h"
        ecx_1 = "iter != NULL"
    else
        var_1c_1 = "DefParseReadAttribMap"
        var_20_1 = 0x372
        var_24 = "d:\ax\trunk\ax2017\engine\defparsetree.cpp"
        ecx_1 = "pField->pDefMap->defType == DT_ATTRIB_MAP"
    
    sub_489550(arg1, &data_5b2591, ecx_1, var_24, var_20_1, var_1c_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
