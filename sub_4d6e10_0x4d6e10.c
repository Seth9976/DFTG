// 函数名称: sub_4d6e10
// 虚拟地址: 0x4d6e10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4d6e10(int32_t arg1, void* arg2, char* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: void* esi = arg2
    void* esi = arg2
    char* var_c = arg3
    void* var_8 = esi
    int32_t* eax_1 = *(arg4[6] + 0xc)
    char const* const var_30_1
    int32_t var_2c_1
    char* var_28
    char* ecx
    
    if (eax_1 != 0)
        void* result = &eax_1[1]
        char* edi_1 = nullptr
        void* result_1 = result
        
        if (arg5 s<= 0)
            return result
        
        while (true)
            var_28 = arg3
            sub_48a2c0(&var_28, "item")
            int32_t* eax_2 = sub_4d63c0(var_c)
            void* ecx_4 = result_1 + esi
            char* esi_1 = *(ecx_4 - 4)
            int32_t* eax_3 = sub_4d6130(eax_2, "slot")
            var_28 = edi_1
            sub_48a910(&eax_3[1], &data_5efc90)
            int32_t* eax_5 = sub_4d6130(eax_2, "id")
            var_28 = esi_1
            sub_48a910(&eax_5[1], &data_5efc90)
            uint32_t eax_7
            char* ecx_8
            eax_7, ecx_8 = sub_4ce110(arg4[6])
            
            if (eax_7.b == 0)
                var_28 = ecx_8
                sub_48a2c0(&var_28, "value")
                eax_1 = sub_4d63c0(eax_2)
                
                if (eax_2[3] s> 0)
                    int32_t* esi_3 = eax_2[2]
                    
                    if (esi_3 == 0)
                        break
                    
                    int32_t edx_1 = arg4[0xa]
                    void* esi_4 = *esi_3
                    *(esi_4 + 0x10) = (edx_1 u>> 9).b & 1
                    *(esi_4 + 0x11) = (edx_1 u>> 0xa).b & 1
                
                var_28 = nullptr
                result, arg3 = sub_4d78c0(arg4[6], var_28)
            else
                var_28 = nullptr
                result, arg3 = sub_4d6590(eax_7, var_8, var_c, arg4[6], "value", 0, var_28)
            
            esi = ecx_4
            edi_1 = &edi_1[1]
            var_8 = esi
            
            if (edi_1 s>= arg5)
                return result
        
        var_28 = "XList<struct DefParseItem *>::GetTail"
        var_2c_1 = 0x5a
        var_30_1 = "d:\ax\trunk\ax2017\engine\xlist.h"
        ecx = "mpTail != NULL"
    else
        var_28 = "DefinitionGetSize"
        var_2c_1 = 0x6d
        var_30_1 = "d:\ax\trunk\ax2017\engine\definition.cpp"
        ecx = "pDefMap->definitionSize != 0"
    
    sub_489550(eax_1, &data_5b2591, ecx, var_30_1, var_2c_1, var_28)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
