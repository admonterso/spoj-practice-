import React from "react";
import s from "./Post.module.css";
export default function Post(props) {
  return (
    <div className={s.item}>
      <img src="https://i.ytimg.com/vi/fUWrhetZh9M/maxresdefault.jpg" alt="" />

      {props.message}
      <div>
        <span>likes : {props.likes} </span>
      </div>
    </div>
  );
}
