select parent.ID, count(child.ID) as CHILD_COUNT
from ECOLI_DATA parent
left join ECOLI_DATA child
on parent.ID = child.PARENT_ID
group by 1
order by 1;