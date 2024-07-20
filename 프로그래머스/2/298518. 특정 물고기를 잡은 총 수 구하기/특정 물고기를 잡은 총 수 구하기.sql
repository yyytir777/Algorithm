select count(*) as FISH_COUNT
from FISH_INFO fi, FISH_NAME_INFO ni
where fi.FISH_TYPE = ni.FISH_TYPE and (ni.FISH_NAME = 'BASS' or ni.FISH_NAME = 'SNAPPER')