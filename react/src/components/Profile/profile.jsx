import React from "react";
import MyPosts from "./MyPosts/MyPosts";
import s from "./Profile.module.css";
export default function Profile() {
  return (
    <div className={s.content}>
      <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQYv7zIb2UkyEaHORmLW3m_eOfl0IbPQ8V_5A&usqp=CAU" />
      <div>ava + desctiption</div>
      <MyPosts />
    </div>
  );
}
