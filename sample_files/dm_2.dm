#define MAX_LEVEL 20
#define HEAL_RATE 0.5
#define LOG_DEATH(name) world.log << "[name] has been slain."
#define LEVEL_UP_BONUS 25

// A simple DreamMaker example: a small RPG-style mob

/mob/player
	var/max_health = 150
	var/health = 150
	var/stamina = 75
	var/level = 1
	var/name = "Adventurer"
	var/gold = 0

	New()
		world << "Welcome, [name]! Your adventure begins."
		..()

/mob/player/proc/heal(amount)
	health = min(health + amount, max_health)
	src << "You feel better. HP: [health]/[max_health]"

/mob/player/proc/take_damage(amount, mob/attacker)
	health -= amount
	if(health <= 0)
		health = 0
		src << "You have been defeated by [attacker]!"
		death()
	else
		src << "Ouch! HP: [health]/[max_health]"

/mob/player/proc/death()
	LOG_DEATH(name)
	del(src)

/mob/player/proc/level_up()
	if(level >= MAX_LEVEL)
		src << "You are already at the maximum level!"
		return
	level++
	max_health += LEVEL_UP_BONUS
	health = max_health
	src << "Level up! You are now level [level]."

/mob/player/verb/say(msg as text)
	set name = "Say"
	world << "[name] says: [msg]"

/mob/player/verb/look()
	set name = "Look"
	set desc = "Examine your surroundings."
	var/turf/T = get_turf(src)
	src << "You are standing on [T]."

/mob/player/verb/check_stats()
	set name = "Stats"
	src << "Level: [level] | HP: [health]/[max_health] | Gold: [gold]"

/mob/monster
	var/max_health = 40
	var/health = 40
	var/damage = 8
	var/name = "Goblin"
	var/loot = 5

/mob/monster/proc/attack(mob/target)
	target.take_damage(damage, src)

/mob/monster/proc/die(mob/killer)
	if(istype(killer, /mob/player))
		var/mob/player/P = killer
		P.gold += loot
		killer << "You found [loot] gold!"
	del(src)

/turf/floor
	name = "stone floor"
	desc = "A cold, grey stone floor."

/turf/wall
	name = "stone wall"
	density = 1
	opacity = 1
