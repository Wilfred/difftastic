#define MAX_LEVEL 10
#define HEAL_RATE 0.25
#define LOG_DEATH(name) world.log << "[name] has died."

// A simple DreamMaker example: a small RPG-style mob

/mob/player
	var/max_health = 100
	var/health = 100
	var/stamina = 50
	var/level = 1
	var/name = "Adventurer"

	New()
		world << "Welcome, [name]!"
		..()

/mob/player/proc/heal(amount)
	health = min(health + amount, max_health)
	src << "You feel better. HP: [health]/[max_health]"

/mob/player/proc/take_damage(amount)
	health -= amount
	if(health <= 0)
		health = 0
		src << "You have been defeated!"
		death()
	else
		src << "Ouch! HP: [health]/[max_health]"

/mob/player/proc/death()
	LOG_DEATH(name)
	del(src)

/mob/player/verb/say(msg as text)
	set name = "Say"
	world << "[name] says: [msg]"

/mob/player/verb/look()
	set name = "Look"
	set desc = "Examine your surroundings."
	var/turf/T = get_turf(src)
	src << "You are standing on [T]."

/mob/monster
	var/max_health = 30
	var/health = 30
	var/damage = 5
	var/name = "Goblin"

/mob/monster/proc/attack(mob/target)
	target.take_damage(damage)

/turf/floor
	name = "stone floor"
	desc = "A cold, grey stone floor."

/turf/wall
	name = "stone wall"
	density = 1
	opacity = 1
