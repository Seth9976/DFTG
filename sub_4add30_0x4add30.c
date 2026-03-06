// 函数名称: sub_4add30
// 虚拟地址: 0x4add30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_4add30(int32_t arg1, int32_t arg2, int32_t arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    uint32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t var_c = eax_1
    char const* const var_524
    int32_t var_520
    char const* const var_51c
    char* ecx
    
    if (arg3 != 0)
        eax_1 = zx.d(arg3.w)
        void* ecx_2
        
        if (eax_1 u< data_63e5ac)
            ecx_2 = eax_1 * 0x1418 + data_63e5a8
        
        if (eax_1 u>= data_63e5ac || *(ecx_2 + 0x1410) != arg3)
            var_51c = "DataArray<struct UI2>::DataArrayGet"
            var_520 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_524 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            int32_t var_510[0x141]
            eax_1 = sub_4ac920(eax_1, &var_510, ecx_2, nullptr)
            
            if (arg2 s>= 0)
                if (arg2 s< eax_1)
                    int32_t eax_2 = arg2 * 5
                    int32_t ecx_4 = var_510[eax_2 + 4]
                    *arg4 = *(&var_510 + (eax_2 << 2))
                    arg4[1].d = ecx_4
                    @__security_check_cookie@4(var_c ^ &__saved_ebp)
                    return arg4
                
                var_51c = "FieldGetPropDef"
                var_520 = 0x29e1
                var_524 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                ecx = "propIndex < numDefs"
            else
                var_51c = "FieldGetPropDef"
                var_520 = 0x29e0
                var_524 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                ecx = "propIndex >= 0"
    else
        var_51c = "DataArray<struct UI2>::DataArrayGet"
        var_520 = 0x6c
        ecx = "id != DATAID_NULL"
        var_524 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(eax_1, &data_5b2591, ecx, var_524, var_520, var_51c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
