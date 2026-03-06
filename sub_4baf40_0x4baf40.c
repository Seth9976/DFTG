// 函数名称: sub_4baf40
// 虚拟地址: 0x4baf40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t*sub_4baf40(int128_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: char const* const var_8c
    char const* const var_8c
    int32_t var_88
    char const* const var_84
    int32_t eax
    char* ecx_1
    
    if (arg2 s< 0)
        var_84 = "UI2GetTransformSized"
        var_88 = 0x40cd
        var_8c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
        ecx_1 = "idx >= 0"
    else if (arg2 s< arg3)
        int32_t ecx
        char* edx
        eax = sub_4ad220(eax, edx, ecx, 0xffffffff)
        int32_t ecx_2 = eax
        int128_t var_70
        
        if (ecx_2 == 0)
            _memset(&var_70, eax.b, 0x60)
            *arg1 = var_70
            int128_t var_60
            arg1[1] = var_60
            int128_t var_50
            arg1[2] = var_50
            int128_t var_40
            arg1[3] = var_40
            int128_t var_30
            arg1[4] = var_30
            int128_t var_20
            arg1[5] = var_20
            return arg1
        
        uint32_t esi_1 = zx.d(ecx_2.w)
        
        if (esi_1 u< data_63e5ac)
            int32_t edx_1 = data_63e5a8
            eax = esi_1 * 0x1418
            
            if (*(eax + edx_1 + 0x1410) == ecx_2)
                void* ecx_4 = esi_1 * 0x1418 + edx_1
                void* var_84_1 = ecx_4
                int128_t* eax_3 = sub_49fd90(&var_70, arg2, ecx_4, &var_70)
                *arg1 = *eax_3
                arg1[1] = eax_3[1]
                arg1[2] = eax_3[2]
                arg1[3] = eax_3[3]
                arg1[4] = eax_3[4]
                arg1[5] = eax_3[5]
                return arg1
        
        var_84 = "DataArray<struct UI2>::DataArrayGet"
        var_88 = 0x6d
        var_8c = "d:\ax\trunk\ax2017\engine\dataarray.h"
        ecx_1 = "DataArrayTryToGet(id) != NULL"
    else
        var_84 = "UI2GetTransformSized"
        var_88 = 0x40ce
        var_8c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
        ecx_1 = "idx < count"
    
    sub_489550(eax, &data_5b2591, ecx_1, var_8c, var_88, var_84)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
