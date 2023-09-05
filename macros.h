//Common macros.h
/* Check if a specific bit is set in any register and return true if yes */
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )
/* Set a certain bit in any register */
#define SET_BIT(REG,BIT) (REG |= (1<<BIT))
/* Clear a certain bit in any register */
#define CLEAR_BIT(REG,BIT) (REG &= (~(1<<BIT)))

#define TOGGLE_BIT(REG,BIT) (REG ^= (~(1<<BIT)))