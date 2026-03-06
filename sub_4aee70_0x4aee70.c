// 函数名称: sub_4aee70
// 虚拟地址: 0x4aee70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4aee70(int32_t arg1, int32_t* arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: int32_t* ebx = arg2
    int32_t* ebx = arg2
    int32_t ecx = data_63e5e0
    
    if (ecx != 0 && ecx != arg3)
        arg2.b = 0
        sub_4aec00(ecx, arg2.b)
    
    uint32_t result = data_114e818
    data_63e5e0 = arg3
    float xmm0 = *(result + 0x2c)
    char const* const var_34_1
    int32_t var_30_1
    char const* const var_2c_1
    char* ecx_1
    
    if (arg3 != 0)
        result = zx.d(arg3.w)
        void* edi_2
        
        if (result u< data_63e5ac)
            edi_2 = result * 0x1418 + data_63e5a8
        
        if (result u>= data_63e5ac || *(edi_2 + 0x1410) != arg3)
            var_2c_1 = "DataArray<struct UI2>::DataArrayGet"
            var_30_1 = 0x6d
            ecx_1 = "DataArrayTryToGet(id) != NULL"
            var_34_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            if (*(edi_2 + 0xfec) != 3 || (*(edi_2 + 0xf8c) == 0 && arg4 == 0))
                return result
            
            if (*(edi_2 + 0x1185) == 0)
                int32_t eax
                int32_t edx
                eax, edx = sub_426dd0(edi_2 + 0x10a0)
                *(edi_2 + 0x1144) = eax
                *(edi_2 + 0x1148) = edx
                float xmm0_4 = *(edi_2 + 0x10ac) f- *(edi_2 + 0x10a4)
                *(edi_2 + 0x114c) = *(edi_2 + 0x10a8) f- *(edi_2 + 0x10a0)
                *(edi_2 + 0x1150) = xmm0_4
                float xmm0_5 = *(edi_2 + 0x1020)
                float xmm1_4 = *(edi_2 + 0xf70) * xmm0_5
                float xmm1_6 = *(edi_2 + 0xf74) * xmm0_5
                float xmm0_6 = sub_4bc5c0(edi_2 + 0x2dc, xmm0)
                *(edi_2 + 0x1164) = *(edi_2 + 0xf68)
                *(edi_2 + 0x1154) = xmm1_4 * xmm0_6
                *(edi_2 + 0x1158) = xmm1_6 * xmm0_6
                sub_48a560(edi_2 + 0x1134, edi_2 + 0xfd4)
                char* eax_2 = *(edi_2 + 0xfd4)
                char* const edx_1 = &data_5b2591
                char* const ecx_5 = &data_5b2591
                
                if (eax_2 != 0)
                    ecx_5 = eax_2
                
                char* eax_3 = *(edi_2 + 0xfd8)
                char* const var_2c_3 = ecx_5
                char* const var_30_2 = ecx_5
                
                if (eax_3 != 0)
                    edx_1 = eax_3
                
                char* const var_34_2 = edx_1
                void* var_38_1 = edi_2
                sub_4892e0("set focus %x %s %x %s")
                *(edi_2 + 0x1140) = 0
                char* eax_4 = *(edi_2 + 0x1134)
                int32_t eax_6
                
                if (eax_4 == 0 || *eax_4 == 0)
                    eax_6 = 0
                else
                    eax_6 = *(sub_48a080(edi_2 + 0x1134) + 8)
                
                *(edi_2 + 0x1138) = eax_6
                *(edi_2 + 0x1185) = 1
                result = sub_4a8420(eax_6, &data_63c44c, edi_2, 0x3f800000, 0xfffffc18)
                
                if (ebx != 0)
                    return sub_508c90(edi_2 + 0x1134, 1, ebx)
                
                return result
            
            var_2c_1 = "UI2SetFocus"
            var_30_1 = 0x2c0b
            var_34_1 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            ecx_1 = "el.textBox.mHasFocus == false"
    else
        var_2c_1 = "DataArray<struct UI2>::DataArrayGet"
        var_30_1 = 0x6c
        ecx_1 = "id != DATAID_NULL"
        var_34_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(result, &data_5b2591, ecx_1, var_34_1, var_30_1, var_2c_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
