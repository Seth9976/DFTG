// 函数名称: sub_4ef550
// 虚拟地址: 0x4ef550
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

bool __convention("regparm")sub_4ef550(int32_t arg1, int32_t* arg2, int32_t arg3, void* arg4)
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
    void* eax = sub_4f0fd0(&data_624734, arg3)
    *(arg4 + 8) = 0
    *(arg4 + 0xc) = 0
    uint32_t eax_2 = *(eax + 0x10) - 1
    char const* const ecx_3
    
    if (eax_2 u> 0x28)
    label_4ef6c1:
        char const* const var_14_8 = "sMaterialFunctionalRenderStateValueFromConstant"
        int32_t var_18_5 = 0x28c
        ecx_3 = "Halt"
    label_4ef6d0:
        char const* const var_1c_2 = "d:\ax\trunk\ax2017\engine\material.cpp"
        sub_489550(eax_2, &data_5b2591, ecx_3)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    eax_2 = zx.d(lookup_table_4ef710[eax_2])
    
    switch (eax_2)
        case 0
            *(arg4 + 4) = sub_4f0c50(eax_2, arg2, &data_624734, arg3)
        label_4ef6ad:
            void* var_14_7 = arg4
            int32_t* var_18_4 = arg2
            int32_t var_1c_1 = arg3
            return (*(*data_114ec78 + 0x78))() != 0
        case 1
            *(arg4 + 4) = sub_4f0d60(eax_2, arg2, &data_624734, arg3)
            goto label_4ef6ad
        case 2
            *(arg4 + 4) = zx.d(sub_4f0cd0(eax_2, arg2, &data_624734, arg3))
            goto label_4ef6ad
        case 3
            *(arg4 + 4) = sub_4f0ef0(eax_2, arg2, &data_624734, arg3)
            goto label_4ef6ad
        case 4
            eax_2 = sub_4f0e70(eax_2, arg2, &data_624734, data_126cc4c, arg3)
            
            if (eax_2 == 0)
                char const* const var_14_6 = "sMaterialFunctionalRenderStateValueFromConstant"
                int32_t var_18_3 = 0x287
                ecx_3 = "pColor"
                goto label_4ef6d0
            
            float var_1c
            int32_t eax_14 = sub_497d80((*eax_2).d, var_1c)
            *(arg4 + 4) = (((((eax_14 u>> 0x18 << 8) + zx.d(eax_14.b)) << 8) + zx.d((eax_14 u>> 8).b))
                << 8) + zx.d((eax_14 u>> 0x10).b)
            goto label_4ef6ad
        case 5
            int32_t* eax_8 = sub_4f0e70(eax_2, arg2, &data_624734, data_126cc50, arg3)
            
            if (eax_8 == 0)
                goto label_4ef6ad
            
            int32_t ecx = *eax_8
            *(arg4 + 4) = (((((ecx u>> 0x18 << 8) + zx.d(ecx.b)) << 8) + zx.d((ecx u>> 8).b)) << 8)
                + zx.d((ecx u>> 0x10).b)
            goto label_4ef6ad
        case 6
            goto label_4ef6c1
}
